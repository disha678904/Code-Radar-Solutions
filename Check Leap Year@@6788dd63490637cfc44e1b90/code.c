int main() {
    int num;
    scanf("%d", &num);
     if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)){  
        printf(" %d Leap Year" ,num);
        }
        else{
            printf(" %d Not a Leap Year" ,num);
             }
    
    return 0;
}

