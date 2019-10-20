//Wirte your code logic here!
   int sum[] = new int[arr.length];
        int temp = 0, tempsum =0;
        int i,j;
        int min = 0, max = 0;
          for( i = 0; i< arr.length; i ++ ) {
                 temp = arr[i];
                 tempsum = tempsum + arr[i];
        }
        for( j = 0; j < arr.length ; j ++){
          sum[j] = tempsum - arr[j];
        }
        for(int k = 0; k < sum.length; k++) {
            min = sum[k];
            if(sum[k] < min) {
                min = temp;
                temp = sum[k];
                sum[k] = min;
            }
        }

        for(int k = 0; k < sum.length; k++) {
           if(sum[k] > max)
            {
                max = sum[k];
            }
        }
    System.out.print(min+ " ");
    System.out.print(max);
