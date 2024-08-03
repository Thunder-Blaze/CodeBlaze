#include <stdio.h>
#include <math.h>

int main(){
    int test_cases = 0;
    scanf("%d",&test_cases);
    int out[test_cases];
    if (test_cases>=1 && test_cases<=pow(10,4)) {
        for (int l = 0; l < test_cases; l++)
        {
            out[l]=0;
            int n, k, a[k];
            scanf("%d %d",&n,&k);
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
                    } else {
                        printf("Inputs are Wrong");
                        goto end;
                    }
                }
                if (sum==n)
                {
                    int count = 0;
                    // int lines = 0;
                    int least = 0, highest = 0;
                    // while (count != 1 || a[highest] == n)
                    // {
                        /* code */
                    // }
                    
                    while (count != 1 && highest!=n)
                    {
                        count=0;
                        for (int i = 0; i < k; i++)
                        {
                            if (a[i]>0)
                            {
                                count++;
                            }
                        }
                        if (count==1)
                        {
                            break;
                        }
                        
                        // printf("The count is %d\n",count);
                        for (int i = 0; i < k; i++)
                        {
                            if (a[i]>a[highest])
                            {
                                highest = i;
                            }
                            if ((a[i]<a[highest] && a[i]!=0))
                            {
                                least = i;
                            }
                        }
                        while (a[least]>0)
                        {
                            if (a[least]==1)
                            {
                                a[highest]++;
                                a[least]--;
                                out[l]++;
                            } else if (a[least]>1) {
                                a[highest]++;
                                a[least]--;
                                out[l]++;
                                out[l]++;
                            }
                        }
                        
                        // a[highest] = a[highest + 1];
                        // if (a[least]==1)
                        // {
                        //     a[highest] = a[highest + 1];
                        //     a[least] = a[least] - 1;
                        //     out[l]++;
                        // } else if (a[least]!=0) {
                        //     a[highest] = a[highest + 1];
                        //     a[least] = a[least] - 1;
                        //     out[l]++;
                        //     out[l]++;
                        // }
                        // printf("The least is %d\n",a[least]);
                        // printf("The highest is %d\n",a[highest]);
                        
                        // lines++;
                    }
                    // printf("The Output is %d",out[l]);

                } else {
                    printf("Inputs are Wrong");
                    goto end;
                }
                
            } else {
                printf("Inputs are Wrong");
                goto end;
            }
        }
        for (int l = 0; l < test_cases; l++)
        {
            printf("%d\n",out[l]);
        }
        
    } else {
        printf("Test Cases should be between 1 to 10000\n");
    }
    end:
    return 0;
}