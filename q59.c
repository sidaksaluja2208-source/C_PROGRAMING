/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
  #include <stdio.h>
int main(){
    int n,count1=0,count2=0;
    printf("How many inputs?");
    scanf("%d" ,&n);
    int arr[n];
     
    printf("Enter Inputs :");
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
        printf("Entered Inputs are :\n");
        for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
        if(arr[i]%2==0){
            count1++;
        }
        if(arr[i]%2!=0){
            count2++;
        }
        
    }
    printf("\nEven Numbers are:%d and odd numbers are: %d\n" , count1,count2);
}