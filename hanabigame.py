import pygame
import random
import math

# Khởi tạo Pygame
pygame.init()

# Thiết lập cửa sổ
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Fireworks Simulation")

# Màu sắc
BLACK = (0, 0, 0)
colors = [(random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)) for _ in range(5)]

# Lớp pháo hoa
class Firework:
    def __init__(self, x, y, color):
        self.x = x
        self.y = y
        self.color = color
        self.particles = []
        self.exploded = False

    def explode(self):
        for _ in range(100):  # Tạo 100 hạt pháo hoa
            angle = random.uniform(0, 2 * math.pi)
            speed = random.uniform(2, 6)
            dx = math.cos(angle) * speed
            dy = math.sin(angle) * speed
            self.particles.append([self.x, self.y, dx, dy])

        self.exploded = True

    def update(self):
        if not self.exploded:
            self.y -= 5  # Di chuyển pháo hoa lên trên
            if self.y < height // 2:
                self.explode()

        for particle in self.particles:
            particle[0] += particle[2]
            particle[1] += particle[3]
            particle[3] += 0.1  # Trọng lực

    def draw(self, screen):
        if not self.exploded:
            pygame.draw.circle(screen, self.color, (self.x, self.y), 5)
        for particle in self.particles:
            pygame.draw.circle(screen, self.color, (int(particle[0]), int(particle[1])), 3)

# Chính
def main():
    run = True
    clock = pygame.time.Clock()
    fireworks = [Firework(random.randint(0, width), height, random.choice(colors)) for _ in range(3)]

    while run:
        clock.tick(30)
        screen.fill(BLACK)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False

        for firework in fireworks:
            firework.update()
            firework.draw(screen)

        pygame.display.flip()

    pygame.quit()

if __name__ == "__main__":
    main()

