//Wirte your code logic here!
void grade_optimisation(int grades[], int no_students)
{
    int num = 0;
    for(int i = 0; i < no_students; i++)
    {
        if(grades[i] > 37)
        {
            if((grades[i] % 5) > 2)
            {
                num = grades[i]/5;
                grades[i] = 5 * (num+1);
            }
        }
    }

    for(int i=0; i < no_students; i++) {
        cout<<grades[i]<<"\n";
    }
}
