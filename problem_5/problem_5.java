int size= grades.size();
    int t = 0,check =0;
    List<Integer> newArr = new ArrayList<Integer>(size);
    for(int i = 0;  i < size;  i++) {
        if(grades.get(i) < 40 ) {
            if(grades.get(i) >= 38){
                newArr.add(40);
            }else{
            newArr.add(grades.get(i));
            }
        }
        else if(grades.get(i)% 5 == 0 && grades.get(i) >= 40){
            newArr.add(grades.get(i));
        }
        else{
            t = grades.get(i)/5 + 1;
            t = t * 5;
            check = t - grades.get(i);
            if (check < 3) {
                newArr.add(t);
            } else  {
                newArr.add(grades.get(i));
            }
        }
    }
    return newArr;
    }