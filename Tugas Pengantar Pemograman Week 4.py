Usia = int (input("USIA :"))
Harga_Tiket = int (input("HARGA TIKET :"))

def Rumus_Harga_Tiket (Usia,Harga_Tiket):
 if 0 <= Usia <=5 :
        return Harga_Tiket - Harga_Tiket * 0.8
 
 elif 6<= Usia <=59 :
        return Harga_Tiket * 1
 
 elif  Usia >= 60 :
       return  Harga_Tiket - Harga_Tiket * 0.25
 



print ("HASIL :" , (Rumus_Harga_Tiket(Usia , Harga_Tiket)))






    

     
     





