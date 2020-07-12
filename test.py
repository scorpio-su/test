# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 18:46:44 2020

@author: Username
"""

'''
sco=list(map(int,input().replace('\n','').split(' ')))
lis=[]
num=sum(sco)
num1=num//10
#sum1
for i in sco:
    #n=int(input())
    #sum1+=i
    if i-num1 >=5: lis.append('A')
    elif i-num1 >=2: lis.append('B')
    elif i-num1 >=0: lis.append('C')
    else: lis.append('D')

print(' '.join(k for k in lis))

lis1=[0,0,0,0,0,0,0,0,0,0]
lis2=['','','','','','','','','','']

for i in range(10):
    lis1[i]=int(input())

num1=sum(lis1)//10

for i in range(10):   
    n=lis1[i]-num1
    if n >=5: lis2[i]='A'
    elif n >=2: lis2[i]='B'
    elif n >=0: lis2[i]='C'
    else: lis2[i]='D'

for i in range(10): 
    print(lis2[i],end=' ')
print()
'''
'''
import tensorflow as tf
valor1 = tf.constant(2)
valor2 = tf.constant(3)
type(valor1)
print(valor1)
#soma=valor1+valor2
soma=tf.add(valor1,valor2)
type(soma)

sess = tf.compat.v1.Session()

with sess:
    print(sess.run(soma))
    '''
'''
import tensorflow as tf
hello = tf.constant('Hello, TensorFlow!')
tf.print(hello)
'''
'''
from decimal import Decimal
a = Decimal('0.58')
b = Decimal('3')
print(a * b)
'''
'''
def add(x,y):
    return x+y

add1=lambda x,y: x+y
print(add1(5,5))
'''
'''
import random

lis1=[]
lis2=[]
lis3=[7181,7189,7271,7279,7631,7639,7811,7819,7891,7898
      ,7899,8171,8179,8181,8189,8261,8269,8361,8369,8621
      ,8629,8791]

max1=1
max2=0

for k in range(5):
    for i in range(10000):
        x=random.randint(7277,8700)
        index=-1
        for j in range(len(lis1)):
            if lis1[j]==x:
                index=j
                break
        else:
            lis1.append(x)
        if index != -1:
            lis2[index]+=1
            if max1<lis2[index]:
                max2=index
        else:
            lis2.append(1)    
    print(lis1[max2])
    for j in lis3:
        if j == lis1[max2]:
            print('有一樣的')
            break
    else:
        print('沒有要在選一次')
'''    
'''
import math as m
a,b,c=list(map(int,input().replace('\n','').split()))
a1,b1,c1=list(map(int,input().replace('\n','').split()))
tx,ty,tz=b*c1-c*b1,a1*c-c1*a,a*b1-b*a1
num=1000
print(tx/num,ty/num,tz/num)
x1,y1,z1=tx*num,ty*num,tz*num
print(m.sqrt(x1**2+y1**2+z1**2))
#print()
#print()
'''
s=123
print(s)