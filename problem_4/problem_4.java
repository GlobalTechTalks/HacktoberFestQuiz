static String timeConversion(String s) {
        int num;    
        String res ="";  // store final time value
        String temp = "0"; // add 0 before single digit time
        int r = s.indexOf(':');     // storing index of first ':''
        
        // type conversion
        num = Integer.parseInt(s.substring(0,r));
        if((s.substring(s.length()-2,s.length()).equals("PM"))){
                temp = "";
                num = num + 12;
            if(num == 24) {
                num = num - 12;
                 }       
    }
     else {
        if(num == 12) 
            num = 0;         
    } 

    res = temp + num + s.substring(r,s.length()-2);
       return res;
    }