 #include <stdio.h>
 #define LOOP_ITERATION 10

//Example of a function prototype. Signals to compiler there is a 
//function like this after the current execution
int sum(int, int);
int factorial(int);
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



void course_1(){
    //C Programming: Getting Started For Complete Beginners Dartmouth Edx.org
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
}

void course_2(){
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
}

int factorial(int n){
    int result;
    result = n * factorial(n-1);
    return result;
}

void recursion_demo(){
    int n = 15;
    int facto;

    facto = factorial(n);
    printf("Result");
}


void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void addThree(int* i){
    *i += 3;
}

void reset_array(int ptr[]){
    ptr[0] = 10;
    ptr[1] = 12;
    ptr[2] = 14;
}

void course_3(){
    //C Programming: Modular Programming and Memory Management
    int a, b;
    int result;
    printf("Please enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = sum(a, b);
    printf("Result of sum of the numbers = %d. \n", result);
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("Char sizeof: %zu\n", sizeof(char));
    printf("Int sizeof: %zu\n", sizeof(int));
    printf("Double sizeof: %zu\n", sizeof(double));
    printf("listChar sizeof: %zu\n", sizeof(listChar));
    printf("listInt sizeof: %zu\n", sizeof(listInt));
    printf("listDouble sizeof: %zu\n", sizeof(listDouble));

    d = 58.56;
    c = 'x';
    int* address_of_a = &a;
    printf("address of int a: %p\n", address_of_a);
    double* address_of_d = &d;
    printf("address of double d: %p\n", address_of_d);
    char* address_of_c = &c;
    printf("address of char c: %p\n", address_of_c);

    printf("Value at address %p is %.2lf\n", address_of_d, *address_of_d);
    char dereferencedChar = *address_of_c; 
    printf("Value at the address %p is %c\n", address_of_c, dereferencedChar);
    address_of_c = address_of_c + 1;
    *address_of_c = 'm';
    printf("Value at the address %p is %c\n", address_of_c, *address_of_c);
    int aSwap = 3;
    int bSwap = 5;
    printf("Before swap a: %d a: %d\n", aSwap ,  bSwap );
    swap(&aSwap , &bSwap);
    printf("After swap a: %d b: %d\n", aSwap, bSwap);

    int before = 5;
    addThree(&before);
    printf("Add three: %d\n", before);

    int arr[3] = {10, 12, 14};
    printf("%p\n", arr);
    int* arr_ptr = arr;
    *arr_ptr = 2;
    *(arr_ptr + 1) = 4;
    printf("%p%p%p\n", *arr_ptr,*(arr_ptr + 1),*(arr_ptr + 2) );
    reset_array(arr);
     printf("%p%p%p\n", *arr_ptr,*(arr_ptr + 1),*(arr_ptr + 2) );
}

double myFunc(int j, double d, char l){
    printf("Recevied: %d, %lf, %c\n", j, d, l);
    j++;
    d =  j*d;
    l = 'b';
    printf("After modification: %d, %lf, %c\n", j, d, l);
}

void times_two(int* num){
    printf("In the function the number is %d\n", *num);
    *num = *num * 2;
    printf("In the function the number is now %d\n", *num);
}

void multidimensional_arrays(){
    short a[3] = {234, 655, 843};
    short b[2] = {16, 62};
    short c[4] = {3456, 3467, 23, 276};
    short * arrays[3] = {a, b, c};

    * arrays[0] = 5;//Same as
    arrays[0][0] = 0;//this

    * (arrays[0] + 1) = 6;
    arrays[0][1] = 0;

     * (arrays[0] + 2) = 7;
    arrays[0][2] = 0;

     * arrays[1] = 3;
    arrays[1][0] = 0;
    
     * (arrays[1] + 1) = 4;
     arrays[1][1] = 0;
}

void course_4(){
    //C Programming: Pointers and Memory Management
    int i;
    double a, b;
    char c;
    int ar[3];
    a = 1.0;
    c = 'a';
    for(i = 0; i < 3; ++i){
        ar[i] = i*i+1;
        b = myFunc(i, a*i, c);
    }

    int n; 
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("You entered: %d.\n", n);
    times_two(&n);
    printf("In main the value is: %d.\n", n);
    //Multidimensional arrays
    multidimensional_arrays();

}

 int main(){
    //course_1();
    //course_2();
    //course_3();
    course_4();
    return 0; 
 }
 
 int sum(int x, int y){
    int compute;
    printf("Starting computation...\n");
    compute = x + y;
    printf("Finished computation...\n");
    return compute;
}