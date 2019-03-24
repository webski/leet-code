#include <stdio.h>
#include <stdlib.h>

int cmpfoo(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int maxIndex(int *array, size_t size)
{
    int i = 1, max = 0;
    for (i; i < size; i++)
    {
        if ((array + max) < (array + i))
            max = i;
    }
    return max;
}

/*
    profitsTable = arr[i][j]    :=  i - buying day, j - profit from selling stock from day i on day j
*/

int *makeProfitsTable(int *prices, const int pricesSize)
{
    int profit = 0,
        currentBuyPrice = 0,
        profitsTableSize = pricesSize * pricesSize,
        i = 0,
        j = 0;

    //make array
    int *profitsTable =
        (int *)calloc(profitsTableSize, sizeof(int));

    //populate
    for (i = 0; i < pricesSize; i++)
    {
        currentBuyPrice = prices[i];

        for (j = i /*for triangular array*/; j < pricesSize; j++)
        {
            profit = prices[j] - currentBuyPrice;
            *(profitsTable + i * pricesSize + j) = profit;
        }
    }

    //print
    for (i = 0; i < pricesSize; i++)
    {
        for (j = 0 /*for triangular array*/; j < pricesSize; j++)
        {
            printf("%2d   ", *(profitsTable + i * pricesSize + j));
        }
        printf("\n");
    }

    // int* tmp;
    // int max_index = 0;
    // for (i = 0; i < pricesSize; i++)
    // {
    //     tmp = (profitsTable+i*pricesSize);
    //     max_index = maxIndex(tmp+i+1, pricesSize-i-1);
    //     *tmp = tmp[max_index];
    // }
    // printf("\n");
    // //print
    // for (i = 0; i < pricesSize; i++)
    // {
    //     for (j = 0 /*for triangular array*/; j < pricesSize; j++)
    //     {
    //         printf("%2d   ", *(profitsTable + i * pricesSize + j));
    //     }
    //     printf("\n");
    // }

    free(profitsTable);
}

#define INPUT_SIZE 6
#define CHROMOSOME_SIZE INPUT_SIZE - 1
#define POPULATION_SIZE CHROMOSOME_SIZE
int input[INPUT_SIZE] = {7, 1, 5, 3, 6, 4};


typedef struct
{
    int chromosome[CHROMOSOME_SIZE];
    int fitness; //profit

} Individual;

int calculateFitness(Individual *ind, int* profitsTable)
{
    int i = 0, retVal = 0;
    for(i ; i < CHROMOSOME_SIZE ; i++)
    {
        retVal += profitsTable[ind->chromosome[i]];
    }
}
/*
    fitness of population - the bigger profit the better
    gene    -   
    population  -   vector where: 
                    length = pricesSize,
                    i = { 0, ... , pricesSize-1 } 
                    population[i] = day when stock from day 'i' was sold
    profit(population)  -   returns sum of profitsTable[i*pricesSize]


*/

Individual* initPopulation(int size = POPULATION_SIZE)
{
    Individual* population = malloc(POPULATION_SIZE*sizeof(Individual));
    int i = 0;
    for(i ; i < size ; i++)
    {
        (population+i)->
    }
}

int maxProfit(int *prices, int pricesSize)
{
}

int main()
{
    makeProfitsTable(input, INPUT_SIZE);
    return 0;
}