#!/usr/bin/env python
# coding: utf-8

# In[4]:


percept= ["Anum", "Taimur", "Ali", "Saad"]
state = ["happy", "sad", "angry", "normal"]
rule= ["smile", "cry", "frown", "watch football"]
def GetState(cPercept):
    index=-1
    for p in percept:
        index=index+1
        if p==cPercept:
            return state[index]
def GetRule(cState):
    index=-1
    for s in state:
        index=index+1
        if s==cState:
            return rule[index]
def SimpleReflexAgent(cPercept):
    return GetRule(GetState(cPercept))
print ("MENU: ")
print (" 0:Anum 1:Taimur 2:Ali 3:Saad")
print (SimpleReflexAgent(percept[int(input("Input Number :"))]))
        


# In[1]:




