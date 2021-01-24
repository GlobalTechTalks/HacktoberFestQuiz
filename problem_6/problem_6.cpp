int find_jump(int x1, int v1, int x2, int v2)
{
    if(abs((x1+v1) - (x2+v2)) < abs(x2-x1)) 
    {
        for(int i=0; ;i++)
        {
            x1 = x1 + v1;
            x2 = x2 + v2;
            if(x1 == x2)
            return 1; 
        }
    }
    else 
    return 0;
}
