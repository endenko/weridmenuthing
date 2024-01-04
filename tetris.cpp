#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

const int WINDOW_WIDTH = 300;
const int WINDOW_HEIGHT = 600;
const int BLOCK_SIZE = 30;
const int BOARD_WIDTH = WINDOW_WIDTH / BLOCK_SIZE;
const int BOARD_HEIGHT = WINDOW_HEIGHT / BLOCK_SIZE;

bool board[BOARD_WIDTH][BOARD_HEIGHT] = {false};

sf::Color colors[7] = {
    sf::Color::Cyan,
    sf::Color::Yellow,
    sf::Color::Magenta,
    sf::Color::Red,
    sf::Color::Green,
    sf::Color::Blue,
    sf::Color(165, 42, 42)  // Brown
};

int shapes[7][4] = {
    {1, 3, 5, 7},      // I
    {2, 4, 5, 7},      // J
    {3, 5, 4, 6},      // L
    {3, 4, 5, 6},      // O
    {2, 4, 5, 6},      // S
    {3, 5, 4, 7},      // T
    {2, 3, 5, 7}       // Z
};

class Tetris {
public:
    Tetris();
    void run();

private:
    sf::RenderWindow window;
    sf::Clock clock;
    sf::Time elapsed;
    sf::RectangleShape block;
    int currentShape;
    int currentRotation;
    int currentX;
    int currentY;
    bool isGameOver;

    bool checkCollision();
    void draw();
    void update();
};

Tetris::Tetris()
    : window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Tetris"),
      block(sf::Vector2f(BLOCK_SIZE, BLOCK_SIZE)),
      currentShape(0),
      currentRotation(0),
      currentX(BOARD_WIDTH / 2),
      currentY(0),
      isGameOver(false) {
    block.setOutlineThickness(2);
}

bool Tetris::checkCollision() {
    for (int i = 0; i < 4; i++) {
        int x = shapes[currentShape][i] % 2;
        int y = shapes[currentShape][i] / 2;
        int boardX = currentX + x;
        int boardY = currentY + y;

        if (boardX < 0 || boardX >= BOARD_WIDTH || boardY >= BOARD_HEIGHT || board[boardX][boardY]) {
            return true;
        }
    }

    return false;
}

void Tetris::draw() {
    window.clear();

    // Draw the board
    for (int x = 0; x < BOARD_WIDTH; x++) {
        for (int y = 0; y < BOARD_HEIGHT; y++) {
            if (board[x][y]) {
                block.setFillColor(colors[x % 7]);
                block.setPosition(x * BLOCK_SIZE, y * BLOCK_SIZE);
                window.draw(block);
            }
        }
    }

    // Draw the current shape
    for (int i = 0; i < 4; i++) {
        int x = shapes[currentShape][i] % 2;
        int y = shapes[currentShape][i] / 2;
        block.setFillColor(colors[currentShape]);
        block.setPosition((currentX + x) * BLOCK_SIZE, (currentY + y) * BLOCK_SIZE);
        window.draw(block);
    }

    window.display();
}

void Tetris::update() {
    if (!isGameOver) {
        if (clock.getElapsedTime().asSeconds() >= 0.5) {
            currentY++;
            if (checkCollision()) {
                currentY--;
                for (int i = 0; i < 4; i++) {
                    int x = shapes[currentShape][i] % 2;
                    int y = shapes[currentShape][i] / 2;
                    board[currentX + x][currentY + y] = true;
                }
                currentShape = rand() % 7;
                currentRotation = 0;
                currentX = BOARD_WIDTH / 2;
                currentY = 0;
                if (checkCollision()) {
                    isGameOver = true;
                }
            }
            clock.restart();
        }

        draw();
    }
}

void Tetris::run() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event.KeyPressed) {
                if (event.key.code == sf::Keyboard::Left && !isGameOver) {
                    currentX--;
                    if (checkCollision()) {
                        currentX++;
                    }
                } else if (event.key.code == sf::Keyboard::Right && !isGameOver) {
                    currentX++;
                    if (checkCollision()) {
                        currentX--;
                    }
                } else if (event.key.code == sf::Keyboard::Up && !isGameOver) {
                    int nextRotation = (currentRotation + 1) % 4;
                    int nextX = currentX;
                    int nextY = currentY;
                    int shift = 0;

                    if (currentShape != 3) {
                        do {
                            if (shift == 2) {
                                break;
                            }

                            if (nextRotation % 2 != currentRotation % 2) {
                                if (nextRotation % 2 == 0) {
                                    nextX--;
                                } else {
                                    nextX++;
                                }
                            } else {
                                nextY--;
                            }

                            if (!checkCollision()) {
                                currentRotation = nextRotation;
                                currentX = nextX;
                                currentY = nextY;
                                break;
                            } else {
                                if (nextRotation % 2 != currentRotation % 2) {
                                    if (nextRotation % 2 == 0) {
                                        nextX++;
                                    } else {
                                        nextX--;
                                    }
                                } else {
                                    nextY++;
                                }
                            }

                            shift++;
                        } while (shift < 3);

                        if (shift == 3) {
                            currentRotation = nextRotation;
                            currentX = nextX;
                            currentY = nextY;
                        }
                    }
                } else if (event.key.code == sf::Keyboard::Down && !isGameOver) {
                    currentY++;
                    if (checkCollision()) {
                        currentY--;
                    }
                }
            }
        }

        update();
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr));

    Tetris tetris;
    tetris.run();

    return 0;
}

