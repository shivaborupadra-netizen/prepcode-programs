class solution:
    def isLeapYear(self,year:int)->bool:
        if(year%4==0 and year%100!=0):
            print(true)
        else:
            print(false)
        pass