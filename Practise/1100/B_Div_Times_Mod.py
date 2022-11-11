n,k=map(int,input().split())
p=k-1
while n%p!=0: p-=1
print(n//p*k+p)