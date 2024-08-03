#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    for (int i=0 ; i<n-1 ; i++){
        if (s[i]>s[i+1]){
            
        }
    }
}

int permutations(int n){
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; (j <= n) && (j != i); j++)
        {
            for (int k = 0;((k <= n) && (k != i) && (k != j)); k++)
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
        
        // if (n==1)
        // {
        //     printf("%d \n",n);
        // }
        // else {
        //     printf("%d ",n);
        //     permutations(n-1);
        // }
    }
}

int main()
{
	// char **s;
	// int n;
	// scanf("%d", &n);
    // int s[n];

    // for (int i = 0; i < n; i++)
    // {
    //     s[i]=i;
    // }
    
    permutations(3);
	// s = calloc(n, sizeof(char*));
	// for (int i = 0; i < n; i++)
	// {
	// 	s[i] = calloc(11, sizeof(char));
	// 	scanf("%s", s[i]);
	// }
	// do
	// {
	// 	for (int i = 0; i < n; i++)
	// 		printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	// } while (next_permutation(n, s));
	// for (int i = 0; i < n; i++)
	// 	free(s[i]);
	// free(s);
	return 0;
}