//Wirte your code logic here!

 static String timeConversion(String s) {
        int r,num;
        String ss="";
        String s1 ="";
        int i = 0;
    r=s.indexOf(':');
    ss = s.substring(0,r);
     num = Integer.parseInt(ss);
    num = num + 12;
    s1= "" + num + s.substring(r,s.length()-2);
       return s1;

    }