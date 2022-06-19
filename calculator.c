#include <stdio.h>
#include <math.h>
#define PI 3.14159265

//Simple Mode Functions

float add(float x, float y);
float subtract (float x, float y);
float multiply (float x, float y);
float divide (float x, float y);
float modulo (float x, float y);
float power (float x, float y);
float squareRoot(float x);

//Scientific Mode Functions

float sine (float x);
float cosine (float x);
float tangent (float x);
float exponent(float x);
float logten(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);


int main()
{

    int mode, function;
    float x, y, answer;

    printf("Choose calculator mode (1 or 2)\n");
    printf("1: Simple\n2: Scientific\n");
    scanf("%d", &mode);

    //Simple Mode
    if (mode == 1) {
        printf("Choose a function (1 - 7)\n");
        printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Modulo\n6: To the power of?\n7: Square Root\n");
        scanf("%d", &function);

        if (function <= 7 && function > 0) {
            printf("What is x?\n");
            scanf("%f", &x);
            printf("What is y?\n");
            scanf("%f", &y);

            switch (function) 
            {
                case 1: answer = add(x, y);         break;
                case 2: answer = subtract(x, y);    break;
                case 3: answer = multiply(x, y);    break;
                case 4: answer = divide(x, y);      break;
                case 5: answer = modulo(x, y);      break;
                case 6: answer = power(x, y);       break;
                case 7: answer = squareRoot(x);     break;
            }

            printf("Answer = %f", answer);
        }
    }

    //Scientific Mode
    else if (mode == 2)
    {
        printf("Choose a function (1 - 8)\n");
        printf("1: sin\n2: cos\n3: tan\n4: exponent\n5: log10\n6: sinh\n7: cosh\n8: tanh");
        scanf("%d", &function);     

        if (function <= 8 && function > 0) {
            printf("What is x?\n");
            scanf("%f", &x);

            switch (function)
            {
                case 1: answer = sine(x);           break;
                case 2: answer = cosine(x);         break;
                case 3: answer = tangent(x);        break;
                case 4: answer = exponent(x);       break;
                case 5: answer = logten(x);         break;
                case 6: answer = sineh(x);         break;
                case 7: answer = cosineh(x);         break;
                case 8: answer = tangenth(x);         break;
            }
        } 
    }

    else {
        printf("Invalid mode!");
    }
}

//Simple Mode Functions

float add (float x, float y) {
    return (x + y);
}

float subtract (float x, float y) {
    return (x - y);
}

float multiply (float x, float y) {
    return (x * y);
}

float divide (float x, float y) {
    return (x / y);
}

float modulo (float x, float y) {
    return fmod(x, y);
}

float power (float x, float y) {
    return (pow(x, y));
}

float squareRoot(float x) {
    return (sqrt(x));
}

//Scientific Mode Functions

float sine (float x) {
    return (sin( x * PI / 180));
}

float cosine (float x) {
    return (cos( x * PI / 180));
}

float tangent (float x) {
    return (tan( x * PI / 180));
}

float sineh(float x) {
    return (sinh(x));
}

float cosineh(float x) {
    return (cosh(x));
}

float tangenth(float x) {
    return (tanh(x));
}

float exponent(float x) {
    return(exp(x));
}

float logten(float x) {
    return (log10(x));
}