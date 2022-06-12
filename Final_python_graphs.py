import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import csv

#df.columns = df.columns.str.replace(' ','_')
plt.figure(figsize=(10,5))

RSV = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/RSV_value.csv')
KVALUE = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/K_value.csv')
DVALUE = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/D_value.csv')
FIVEMA = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/5ma.csv')
TWENTYMA = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/20ma.csv')
BANDUP = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/band_up.csv')
BANDDOWN = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/band_down.csv')
BANDWIDTH = pd.read_csv('C:/Users/Marrowkuo/garbage_stuff/csv/bamdwidth.csv')

#plt.plot(RSV.days,RSV["Alphabet Inc."])
#plt.show()
def getinput():
    num1 = int(input("Pick a Company to check: "))
    return num1

def get_company():
    company = str(input())

def boolean_graph(company):
    plt.plot(RSV.days,RSV.company)
    plt.plot(BANDUP.days,BANDUP.company)
    plt.plot(BANDDOWN.days,BANDDOWN.company)
    plt.plot(BANDWIDTH.days,BANDWIDTH.company)
    
    
def KD_graph(company):
    plt.plot(KVALUE.days,KVALUE.company)
    plt.plot(DVALUE.days,DVALUE.company)
    
def fivema_graph(company):
    plt.plot(FIVEMA.days,FIVEMA.company)
    
def twentyma_graph(company):
    plt.plot(TWENTYMA.days,TWENTYMA.company)


print("1.Apple Inc.\n2.Microsoft Corporation\n3.Alphabet Inc.\n4.Alphabet Inc.\n")
print("5.Amazon.com Inc.\n6.Berkshire Hathaway Inc.\n7.Tesla Inc.\n8.Meta Platforms Inc.\n")
print("9.NVIDIA Corporation\n10.Johnson & Johnson\n11.UnitedHealth Group Incorporated\n")
print("12.JPMorgan Chase & Co.\n13.The Procter & Gamble Company\n14.Mastercard Incorporated\n")
print("15.Walmart Inc.\n16.Chevron Corporation\n17.The Home Depot Inc.\n18.Bank of America Corporation\n19.Pfizer Inc.\n")

print("Enter a company: ")

company = get_company()

if company == "Apple Inc.":
    plt.plot(RSV.days,RSV["Apple Inc."])
    plt.plot(BANDUP.days,BANDUP["Apple Inc."])
    plt.plot(BANDDOWN.days,BANDDOWN["Apple Inc."])
    plt.plot(BANDWIDTH.days,BANDWIDTH["Apple Inc."])
    
   
elif company == "Microsoft Corporation":
    plt.plot(RSV.days,RSV["Microsoft Corporation"])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])

elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])
    
elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])
    
elif company == "":
    plt.plot(RSV.days,RSV["Alphabet Inc."])
    
