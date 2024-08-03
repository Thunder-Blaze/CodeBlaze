#include <stdio.h>
#include <math.h>

int main(){
    int test_cases = 0;
    scanf("%d",&test_cases);
    int output[test_cases];
    
    if (test_cases>=1 && test_cases<=pow(10,4)) {
        for (int z = 0; z < test_cases; z++)
        {
            int n, k;
            scanf("%d %d",&n,&k);
            int a[k];
            if (2<=n && n<=pow(10,9) && 2<=k && k<=pow(10,5) && k<=n) {
                for (int i = 0; i < k; i++)
                {
                    scanf("%d",&a[i]);
                }
                int sum=0;
                for (int i = 0; i < k; i++)
                {
                    if (a[i]>0 && a[i]<n)
                    {
                        sum+=a[i];
                    }
                }
                if (sum==n)
                {
                    // printf("Reached Sum");
                    int count = 0;
                    int least = 0, highest=0;
                    sum = 0;
                    // while (count != 1 && highest!=n)
                    while (a[highest]!=n)
                    {
                        // printf("In While");
                        // count=0;
                        // for (int i = 0; i < k; i++)
                        // {
                        //     if (a[i]>0)
                        //     {
                        //         count++;
                        //     }
                        // }
                        // if (count==1)
                        // {
                        //     break;
                        // }
                        
                        for (int i = 0; i < k; i++)
                        {
                            if (a[i]==0)
                            {
                                continue;
                            }
                            if (a[i]>=a[highest])
                            {
                                highest = i;
                            }
                            if ((a[i]<a[highest]))
                            {
                                least = i;
                            }
                        }
                        while (a[least]>0 && a[highest]<n)
                        {
                            if (a[least]==1)
                            {
                                a[highest]++;
                                a[least]--;
                                sum++;
                            } else if (a[least]>1) {
                                a[highest]++;
                                a[least]--;
                                sum=sum+2;
                            }
                        }
                    }
                    output[z] = sum;
                }
            }
            // printf("Output[%d] is - %d\n",z,output[z]);
        }
        for (int z = 0; z < test_cases; z++)
        {
            printf("%d\n",output[z]);
        }
        
    } else {
        printf("Test Cases should be between 1 to 10000\n");
    }
    return 0;
}