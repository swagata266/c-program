//Problem 2: Converting Egyptian Fractions to Fractions 
//A unit fraction is a fraction of the form, where r is a (non-zero) integer. An Egyptian fraction is a sum of distinct positive unit fractions, so called because this is the manner in which ancient Egyptians expressed fractions in general. For example, they would have written as 10 
//1/2 + (except that they would have used hieroglyphics rather than Arabic numerals). 
//Develop a program that, given an Egyptian fraction (i.e., a set of distinct positive unit frac- tions), calculates the sum and expresses it in simplest (i.e., reduced) form. 
//Input: The first line contains a positive integer n indicating how many instances of the problem are subsequently described. Each such instance is described on two lines, the first of which contains a single positive integer m indicating how many unit fractions are to be summed. On the second line appears a sequence of m distinct positive integers k1, k2, interpreted as representing the Egyptian fraction + + ··· + 
//k1 
//1 km 

//2,..., km, which is to be 
//Output: For each Egyptian fraction given as input, your program should generate a single line of output indicating the unit fractions that were summed (separated by plus signs), followed by an equals sign, followed by the sum, in simplest form. 
//Sample input 
//3 
//322 
//2 10 
//1 
//35 
//4 
//98 1 2 12 
//Resultant output
// = 
//3/5 
//1/2 + 1/10 
//= 
//1/35 1/35 
//1/98 + 1/1 + 1/2 + 1/12 = 937/588 

#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n, m, i, j, k, denom, numer, g;
    scanf("%d", &n); //Read the number of instances

    //Iterate for each instance
    for (i = 0; i < n; i++) {
        scanf("%d", &m); //Read the number of unit fractions
        denom = 1;
        numer = 0;

        //Iterate for each unit fraction
        for (j = 0; j < m; j++) {
            scanf("%d", &k); //Read the denominator of the unit fraction
            numer = denom;
            denom = denom * k + numer;
        }

        //Print the unit fractions
        for (j = 0; j < m; j++) {
            printf("1/%d", k);
            if (j < m - 1)
                printf(" + ");
        }

        //Reduce the fraction to its simplest form
        g = gcd(numer, denom);
        numer /= g;
        denom /= g;

        //Print the sum
        printf(" = %d/%d\n", numer, denom);
    }

    return 0;
}


