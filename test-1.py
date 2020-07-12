# -*- coding: utf-8 -*-
"""
Created on Wed May 13 18:02:44 2020

@author: Username
"""

class animal:
    def sound(self):
        pass
    def food(self):
        pass

class dog(animal):
    def sound(self):
        print('旺旺旺')
        super().sound()

    def food(self):
        print('骨頭')
        super().food()

class cat(animal):
    def sound(self):
        print('喵喵喵')
        super().sound()
    
    def food(self):
        print('fish')
        super().food()

        
x = dog()
y = cat()

print(x.food(),y.sound())