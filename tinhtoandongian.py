x = input("moi nhap x : ")
y = input("moi nhap y : ")
x=int(x)
y=int(y)
tong = x+y
hieu = x-y
nhan = x*y

print(x,"+",y,"=",tong)
print(x,"-",y,"=",hieu)
print(x,"*",y,"=",nhan)
if(y==0):
    print("khong the chia cho 0")
else:
    chialaydu = x/y
    print(x,"/",y,"=",chialaydu)
