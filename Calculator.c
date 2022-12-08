#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    system("cls");
    printf("\t\t\t\tCalculator");
    printf("\n\nSelect the Option\n");
    printf("\n1. Perform Arithmetic Operation");
    printf("\n2. Find Cube of a Number");
    printf("\n3. Find Square of a Number");
    printf("\n4. Find Power of a Number");
    printf("\n5. Find Area And Perimeter");
    printf("\n6. Find Simple Interest");
    printf("\n7. Find compound Interest");
    float oppr1;
    printf("\n\nEnter Your Number : ");
    scanf("%f", &oppr1);
    Beep(400, 200);
    if (oppr1 == 1)
    {
        system("cls");
        float first;
        float second;

        printf("\n\nEnter Your First Number Is : ");
        scanf("%f", &first);
        Beep(400, 200);
        printf("Enter Your Second Number Is : ");
        scanf("%f", &second);
        Beep(400, 200);
        int oppr;
        printf("\nSelect the Option\n");
        printf("\n1. Addition");
        printf("\n2. Subtration");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n\nEnter Your Operation Number Is : ");
        scanf("%d", &oppr);
        Beep(400, 200);
        if (oppr == 1)
        {
            printf("\nThe Addition of %f + %f Is : %f", first, second, first + second);
        }
        else if (oppr == 2)
        {
            printf("\nThe Subtration of %f - %f Is : %f", first, second, first - second);
        }
        else if (oppr == 3)
        {
            printf("\nThe Multiplication of %f * %f Is : %f", first, second, first * second);
        }
        else if (oppr == 4)
        {
            printf("\nThe Division of %f / %f Is : %f", first, second, first / second);
        }
        else
        {
            printf("\nInvalid Number!!!!");
        }
    }
    else if (oppr1 == 2)
    {
        system("cls");
        float cube;
        printf("Enter Your Number : ");
        scanf("%f", &cube);
        Beep(400, 200);
        printf("The Cube Of %f Is %f", cube, cube * cube);
    }
    else if (oppr1 == 3)
    {
        system("cls");
        float square;
        printf("Enter Your Number : ");
        scanf("%f", &square);
        Beep(400, 200);
        printf("The Cube Of %f Is %f", square, square * square);
    }
    else if (oppr1 == 4)
    {
        system("cls");
        system("cls");
        double base, exp, result;
        printf("Enter a base : ");
        scanf("%lf", &base);
        Beep(400, 200);
        printf("Enter a Exponent : ");
        scanf("%lf", &exp);
        Beep(400, 200);

        result = pow(base, exp);
        printf("The Power of Number Is : %lf", result);
    }
    else if (oppr1 == 5)
    {
        system("cls");
        float peri;
        printf("\nSelect the Option\n");
        printf("\n1. Perimeter of Square");
        printf("\n2. Perimeter of Reactangle");
        printf("\n3. Perimeter of Circle");
        printf("\n4. Perimeter of Rhombus");
        printf("\n5. Perimeter of Hexagon");
        printf("\n6. Area of Square");
        printf("\n7. Area of Reactangle");
        printf("\n8. Area of Circle");
        printf("\n9. Area of Rhombus");
        printf("\n10. Area of Hexagon");
        printf("\n\nFind the Number : ");
        scanf("%f", &peri);
        Beep(400, 200);
        if (peri == 1)
        {
            system("cls");
            float side;
            printf("\nEnter The Side of the Square : ");
            scanf("%f", &side);
            Beep(400, 200);
            printf("Perimeter of Square : %f", 4 * side);
        }
        else if (peri == 2)
        {
            float lenght;
            float breadth;
            printf("Enter The Length of the Recangle : ");
            scanf("%f", &lenght);
            Beep(400, 200);
            printf("Enter The Length of the Recangle : ");
            scanf("%f", &breadth);
            Beep(400, 200);
            printf("Perimeter of Recangle : %f", 2 * (lenght + breadth));
        }
        else if (peri == 3)
        {
            float radius;
            printf("Enter The Radius of the Circle : ");
            scanf("%f", &radius);
            Beep(400, 200);
            printf("Perimeter of Circle : %f", 2 * 3.14 * radius);
        }
        else if (peri == 4)
        {
            float side;
            printf("Enter The Side of the Rhombus : ");
            scanf("%f", &side);
            Beep(400, 200);
            printf("Perimeter of Rhombus : %f", 4 * side);
        }
        else if (peri == 5)
        {
            float side;
            printf("Enter The Side of the Hexagon : ");
            scanf("%f", &side);
            Beep(400, 200);
            printf("Perimeter of Hexagon : %f", 6 * side);
        }
        else if (peri == 6)
        {
            float side;
            printf("\nEnter The Side of the Square : ");
            scanf("%f", &side);
            Beep(400, 200);
            printf("Area of Square : %f", side * side);
        }
        else if (peri == 7)
        {
            float lenght;
            float breadth;
            printf("Enter The Length of the Recangle : ");
            scanf("%f", &lenght);
            Beep(400, 200);
            printf("Enter The Length of the Recangle : ");
            scanf("%f", &breadth);
            Beep(400, 200);
            printf("Area of Recangle : %f", lenght * breadth);
        }
        else if (peri == 8)
        {
            float radius;
            printf("Enter The Radius of the Circle : ");
            scanf("%f", &radius);
            Beep(400, 200);
            printf("Area of Circle : %f", 3.14 * radius * radius);
        }
        else if (peri == 9)
        {
            float diagonal1;
            float diagonal2;
            printf("Enter The First Diagonal : ");
            scanf("%f", &diagonal1);
            Beep(400, 200);
            printf("Enter The Second Diagonal : ");
            scanf("%f", &diagonal2);
            Beep(400, 200);
            printf("Area of Recangle : %f", (diagonal1 * diagonal2) / 2);
        }
        else if (peri == 10)
        {
            float side_lenght;
            printf("Enter The Length of Side of the Hexagon : ");
            scanf("%f", &side_lenght);
            Beep(400, 200);
            printf("Perimeter of Hexagon : %f", (1.73 * 3 * side_lenght * side_lenght) / 2);
        }
        else
        {
            printf("Invalid Number!!!!");
        }
    }
    else if (oppr1 == 6)
    {
        system("cls");
        float balance;
        float annual;
        float time;
        printf("Enter the Initial Principal Balance : ");
        scanf("%f", balance);
        Beep(400, 200);
        printf("Enter the Annual Interest Rate : ");
        scanf("%f", annual);
        Beep(400, 200);
        printf("Enter the Time : ");
        scanf("%f", time);
        Beep(400, 200);
        float final_amount = balance * (1 + annual * time);
        printf("The Final Amount Is : %f", final_amount);
    }
    else if (oppr1 == 7)
    {

        system("cls");
        float balance;
        float interest;
        float time;
        float time_period;
        printf("Enter the Initial Principal Balance : ");
        scanf("%f", balance);
        Beep(400, 200);
        printf("Enter the Interest Rate : ");
        scanf("%f", interest);
        Beep(400, 200);
        printf("Enter the number of times Interest applied per time period : ");
        scanf("%f", time_period);
        Beep(400, 200);
        printf("Enter the Time : ");
        scanf("%f", time);
        Beep(400, 200);
        float final_amount = balance * (1 + interest / time_period);
        float result1 = time_period * time;
        float result2 = pow(final_amount, result1);
        printf("The Final Amount Is : %f", final_amount);
    }
    else
    {
        printf("Invalid Number!!!!");
    }
    printf("\n\nYou want to Relaunch the Calculator\n\n");
    printf("Select the Option\n");
    printf("\n1. Repeat");
    printf("\n2. Exit");
    int repeat;
    printf("\n\nEnter the Number : ");
    scanf("%d", &repeat);
    Beep(400, 200);
    if (repeat == 1)
    {
        system("cls");
        main();
    }
    else
    {
        system("\n\ncls");
        printf("\nBye Bye");
        printf("\nHave a Nice Day");
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <dos.h>
// #include <windows.h>
// #include <graphics.h>

// void welcome()
// {
//     int gdriver = DETECT, gmode, i, j;
//     initgraph(&gdriver, &gmode, "C:\\TurboC++\\Disk\\TurboC3\\BGI");

//     for (i = 1; i < 2; i++)
//     {
//         setcolor(02);
//         settextstyle(i, 0, 1);
//         outtextxy(120, 200, "WELCOME TO CALCULATOR");
//         outtextxy(120, 250 * i, "CREATED BY NITIN SINGH");
//         delay(5000);
//     }
// }

// int main()
// {
//     welcome();

//     system("cls");
//     printf("\t\t\t\tCalculator");
//     printf("\n\nSelect the Option\n");
//     printf("\n1. Perform Arithmetic Operation");
//     printf("\n2. Find Cube of a Number");
//     printf("\n3. Find Square of a Number");
//     printf("\n4. Find Power of a Number");
//     printf("\n5. Find Area And Perimeter");
//     printf("\n6. Find Simple Interest");
//     printf("\n7. Find compound Interest");
//     float oppr1;
//     printf("\n\nEnter Your Number : ");
//     scanf("%f", &oppr1);
//     Beep(400, 200);
//     if (oppr1 == 1)
//     {
//         system("cls");
//         float first;
//         float second;

//         printf("\n\nEnter Your First Number Is : ");
//         scanf("%f", &first);
//         Beep(400, 200);
//         printf("Enter Your Second Number Is : ");
//         scanf("%f", &second);
//         Beep(400, 200);
//         int oppr;
//         printf("\nSelect the Option\n");
//         printf("\n1. Addition");
//         printf("\n2. Subtration");
//         printf("\n3. Multiplication");
//         printf("\n4. Division");
//         printf("\n\nEnter Your Operation Number Is : ");
//         scanf("%d", &oppr);
//         Beep(400, 200);
//         if (oppr == 1)
//         {
//             printf("\nThe Addition of %f + %f Is : %f", first, second, first + second);
//         }
//         else if (oppr == 2)
//         {
//             printf("\nThe Subtration of %f - %f Is : %f", first, second, first - second);
//         }
//         else if (oppr == 3)
//         {
//             printf("\nThe Multiplication of %f * %f Is : %f", first, second, first * second);
//         }
//         else if (oppr == 4)
//         {
//             printf("\nThe Division of %f / %f Is : %f", first, second, first / second);
//         }
//         else
//         {
//             printf("\nInvalid Number!!!!");
//         }
//     }
//     else if (oppr1 == 2)
//     {
//         system("cls");
//         float cube;
//         printf("Enter Your Number : ");
//         scanf("%f", &cube);
//         Beep(400, 200);
//         printf("The Cube Of %f Is %f", cube, cube * cube);
//     }
//     else if (oppr1 == 3)
//     {
//         system("cls");
//         float square;
//         printf("Enter Your Number : ");
//         scanf("%f", &square);
//         Beep(400, 200);
//         printf("The Cube Of %f Is %f", square, square * square);
//     }
//     else if (oppr1 == 4)
//     {
//         system("cls");
//         system("cls");
//         double base, exp, result;
//         printf("Enter a base : ");
//         scanf("%lf", &base);
//         Beep(400, 200);
//         printf("Enter a Exponent : ");
//         scanf("%lf", &exp);
//         Beep(400, 200);

//         result = pow(base, exp);
//         printf("The Power of Number Is : %lf", result);
//     }
//     else if (oppr1 == 5)
//     {
//         system("cls");
//         float peri;
//         printf("\nSelect the Option\n");
//         printf("\n1. Perimeter of Square");
//         printf("\n2. Perimeter of Reactangle");
//         printf("\n3. Perimeter of Circle");
//         printf("\n4. Perimeter of Rhombus");
//         printf("\n5. Perimeter of Hexagon");
//         printf("\n6. Area of Square");
//         printf("\n7. Area of Reactangle");
//         printf("\n8. Area of Circle");
//         printf("\n9. Area of Rhombus");
//         printf("\n10. Area of Hexagon");
//         printf("\n\nFind the Number : ");
//         scanf("%f", &peri);
//         Beep(400, 200);
//         if (peri == 1)
//         {
//             system("cls");
//             float side;
//             printf("\nEnter The Side of the Square : ");
//             scanf("%f", &side);
//             Beep(400, 200);
//             printf("Perimeter of Square : %f", 4 * side);
//         }
//         else if (peri == 2)
//         {
//             float lenght;
//             float breadth;
//             printf("Enter The Length of the Recangle : ");
//             scanf("%f", &lenght);
//             Beep(400, 200);
//             printf("Enter The Length of the Recangle : ");
//             scanf("%f", &breadth);
//             Beep(400, 200);
//             printf("Perimeter of Recangle : %f", 2 * (lenght + breadth));
//         }
//         else if (peri == 3)
//         {
//             float radius;
//             printf("Enter The Radius of the Circle : ");
//             scanf("%f", &radius);
//             Beep(400, 200);
//             printf("Perimeter of Circle : %f", 2 * 3.14 * radius);
//         }
//         else if (peri == 4)
//         {
//             float side;
//             printf("Enter The Side of the Rhombus : ");
//             scanf("%f", &side);
//             Beep(400, 200);
//             printf("Perimeter of Rhombus : %f", 4 * side);
//         }
//         else if (peri == 5)
//         {
//             float side;
//             printf("Enter The Side of the Hexagon : ");
//             scanf("%f", &side);
//             Beep(400, 200);
//             printf("Perimeter of Hexagon : %f", 6 * side);
//         }
//         else if (peri == 6)
//         {
//             float side;
//             printf("\nEnter The Side of the Square : ");
//             scanf("%f", &side);
//             Beep(400, 200);
//             printf("Area of Square : %f", side * side);
//         }
//         else if (peri == 7)
//         {
//             float lenght;
//             float breadth;
//             printf("Enter The Length of the Recangle : ");
//             scanf("%f", &lenght);
//             Beep(400, 200);
//             printf("Enter The Length of the Recangle : ");
//             scanf("%f", &breadth);
//             Beep(400, 200);
//             printf("Area of Recangle : %f", lenght * breadth);
//         }
//         else if (peri == 8)
//         {
//             float radius;
//             printf("Enter The Radius of the Circle : ");
//             scanf("%f", &radius);
//             Beep(400, 200);
//             printf("Area of Circle : %f", 3.14 * radius * radius);
//         }
//         else if (peri == 9)
//         {
//             float diagonal1;
//             float diagonal2;
//             printf("Enter The First Diagonal : ");
//             scanf("%f", &diagonal1);
//             Beep(400, 200);
//             printf("Enter The Second Diagonal : ");
//             scanf("%f", &diagonal2);
//             Beep(400, 200);
//             printf("Area of Recangle : %f", (diagonal1 * diagonal2) / 2);
//         }
//         else if (peri == 10)
//         {
//             float side_lenght;
//             printf("Enter The Length of Side of the Hexagon : ");
//             scanf("%f", &side_lenght);
//             Beep(400, 200);
//             printf("Perimeter of Hexagon : %f", (1.73 * 3 * side_lenght * side_lenght) / 2);
//         }
//         else
//         {
//             printf("Invalid Number!!!!");
//         }
//     }
//     else if (oppr1 == 6)
//     {
//         system("cls");
//         float balance;
//         float annual;
//         float time;
//         printf("Enter the Initial Principal Balance : ");
//         scanf("%f", balance);
//         Beep(400, 200);
//         printf("Enter the Annual Interest Rate : ");
//         scanf("%f", annual);
//         Beep(400, 200);
//         printf("Enter the Time : ");
//         scanf("%f", time);
//         Beep(400, 200);
//         float final_amount = balance * (1 + annual * time);
//         printf("The Final Amount Is : %f", final_amount);
//     }
//     else if (oppr1 == 7)
//     {

//         system("cls");
//         float balance;
//         float interest;
//         float time;
//         float time_period;
//         printf("Enter the Initial Principal Balance : ");
//         scanf("%f", balance);
//         Beep(400, 200);
//         printf("Enter the Interest Rate : ");
//         scanf("%f", interest);
//         Beep(400, 200);
//         printf("Enter the number of times Interest applied per time period : ");
//         scanf("%f", time_period);
//         Beep(400, 200);
//         printf("Enter the Time : ");
//         scanf("%f", time);
//         Beep(400, 200);
//         float final_amount = balance * (1 + interest / time_period);
//         float result1 = time_period * time;
//         float result2 = pow(final_amount, result1);
//         printf("The Final Amount Is : %f", final_amount);
//     }
//     else
//     {
//         printf("Invalid Number!!!!");
//     }
//     printf("\n\nYou want to Relaunch the Calculator\n\n");
//     printf("Select the Option\n");
//     printf("\n1. Repeat");
//     printf("\n2. Exit");
//     int repeat;
//     printf("\n\nEnter the Number : ");
//     scanf("%d", &repeat);
//     Beep(400, 200);
//     if (repeat == 1)
//     {
//         system("cls");
//         main();
//     }
//     else
//     {
//         system("\n\ncls");
//         printf("\nBye Bye");
//         printf("\nHave a Nice Day");
//     }
//     return 0;
// }