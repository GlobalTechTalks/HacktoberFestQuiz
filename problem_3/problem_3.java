//Wirte your code logic here!
    static int birthdayCakeCandles(int[] ar) {
        int temp = 0;
        int count = 0;
        int a = 0;

        for (int i = 0; i < ar.length; i++) {     
            for (int j = i+1; j < ar.length; j++) {     
               if(ar[i] < ar[j]) {    
                   temp = ar[i];  
                   ar[i] = ar[j];    
                   ar[j] = temp;    
               }     
            }             
        }

          
      for (int i=0; i < ar.length; i++){
       if (ar[i] == ar[0])  {
          count++; 
       }
      }
        return count;
     
    }