size=int(input("Entre The Size Of Array"))
ar=[]
arrsum=0
for i in range(0,size):
    ar.append(input())
    arrsum=arrsum+int(ar[i])
print("The Sum Of The Array Is =",arrsum)
exit()
