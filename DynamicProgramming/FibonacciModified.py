# Enter your code here. Read input from STDIN. Print output to STDOUT
inp = raw_input()
inp = inp.split(' ')
result=[]
result.append(0)
result.append(int(inp[0]))
result.append(int(inp[1]))
N = int(inp[2])
for i in range(3, N+1):
    result.append((result[i-1]*result[i-1])+result[i-2])
print result[N]
