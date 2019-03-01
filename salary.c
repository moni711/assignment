#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--){
        
       long int salary;
       double basesalary;
       
       scanf("%ld",&salary);
       
       if(salary < 1500)
            basesalary = 1.0*salary + 0.1*salary + 0.9*salary ;
        else
            basesalary = 1.0*salary + 500.000000 + 0.98*salary;
            
        printf("%0.2lf\n",basesalary);
    }

    return 0;
}