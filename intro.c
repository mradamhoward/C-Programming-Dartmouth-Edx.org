 #include <stdio.h>
 #define LOOP_ITERATION 10

void play_lotto(){
    printf("\nEnter your 4 lucky numbers for the lotto.\n");
    int first_lucky_number;
    int second_lucky_number;
    int third_lucky_number;
    int fourth_lucky_number;

    scanf("%d%d%d%d", &first_lucky_number, &second_lucky_number, &third_lucky_number,&fourth_lucky_number);
    printf("Lucky numbers are: \n");
    printf("1: %d\n2: %d\n3: %d\n4: %d\n",first_lucky_number, second_lucky_number, third_lucky_number,fourth_lucky_number);
}
void demonstrate_basic_int_array(){
    int values[6];
    values[0] = 2;
    values[1] = 4;
    values[2] = 6;
    values[3] = 1;
    values[4] = 3;
    values[5] = 5;

    printf("First element in the values array is: %d\n", values[0]);
    printf("Second element in the values array is: %d\n", values[1]);
    printf("Third element in the values array is: %d\n", values[2]);
    printf("Fourth element in the values array is: %d\n", values[3]);
    printf("Fifth element in the values array is: %d\n", values[4]);
    printf("Sixth element in the values array is: %d\n", values[5]);
}

 int main(){
    //C Programming: Getting Started For Complete Beginners Dartmouth Edx.org
    //Also some of my own works
    printf("Hello, world!\n");
    printf("Have fun\n");
    for(int i = 0; i < LOOP_ITERATION; ++i){
        printf("Hello, world! loop\n");
    }
    int days_until_christmas = 30;
    printf("How many days until Christmas? %d \n", days_until_christmas);
    
    printf("5+2: %d, 5*6: %d, 6-2: %d\n", 5+2, 5*6, 6-2);
    int balance = 100;
    printf("I have %d euro in my account.\n", balance);
    balance = balance - 10;
    printf("I have %d euro in my account.\n", balance);
    int number_hazelnuts = 0;
    int distance_traveled = 0;

    for(int i = 0; i < LOOP_ITERATION; i++){
        printf("At %d miles, I have %d hazelnuts.\n", distance_traveled, number_hazelnuts);
        distance_traveled = distance_traveled + 1;
        number_hazelnuts = number_hazelnuts + 3;
    }

    int age;
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    if(age > 18){
        printf("You are old enough to drink. You also can play the lotto.\n Do you want to play the lotto? ");
        char ans;
        scanf(" %c",&ans);
        if(ans == 'y' || ans == 'Y'){
            play_lotto();
        }
    } else {
        printf("You are not old enough to drink. You also can't play the lotto. ");
    }
    double height;
    printf("How tall are you in meters?\n");
    scanf("%lf", &height);
    printf("\nYou are %.2lf meters tall.\n", height);
    printf("Integer division: 7/2 = %d\n", 7/2);
    printf("Floating point division: 7.0/2.0 = %lf\n", 7.0/2.0);
    
    //C Programming: Language Foundations - Second course on edx.org
    if(0){
        printf("Condition is true\n");
    } else {
        printf("Condition is not true\n");
    }
    printf("With this amount of precision, it is true\n");
    double a = 5.00000000000000001;
    double b = 5.00000000000000000;

    int result = a == b;
    printf("Result is: %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
    printf("With precision low like this, not true\n");
    a = 5.00001;
    b = 5.00000;
    result = a == b;
     printf("Result is: %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
    // Demonstrating AND operator
    int sunny = 1;
    int vacation = 1;

    int sunny_and_vacation = sunny && vacation;
    if(sunny_and_vacation){
        printf("It is sunny and I'm on vacation.\n");
    } else {
        printf("It is not sunny and I'm on vacation.\n");
    }
    sunny = 0;
    sunny_and_vacation = sunny && vacation;
    if(sunny_and_vacation){
        printf("It is sunny and I'm on vacation.\n");
    } else {
        printf("It is not sunny and I'm on vacation.\n");
    }
    // Demonstrating OR operator
    sunny = 0;
    vacation = 0;
    int sunny_or_vacation = sunny || vacation;
    if(sunny_or_vacation){
         printf("It is sunny or I'm on vacation or both.\n");
    } else {
         printf("It is not sunny or I'm on not vacation or both.\n");
    }
    sunny = 1;
    vacation = 0;
    sunny_or_vacation = sunny || vacation;
    if(sunny_or_vacation){
         printf("It is sunny or I'm on vacation or both.\n");
    } else {
         printf("It is not sunny or I'm on not vacation or both.\n");
    }
    sunny = 0;
    vacation = 1;
    sunny_or_vacation = sunny || vacation;
    if(sunny_or_vacation){
         printf("It is sunny or I'm on vacation or both.\n");
    } else {
         printf("It is not sunny or I'm on not vacation or both.\n");
    }
    demonstrate_basic_int_array();
    return 0; 
 }