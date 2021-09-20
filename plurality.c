#include <cs50.h>
#include <stdio.h>
#include <string.h>

//MAXIMUM NO OF CANDIDATE
#define MAX 9

//CANDIDATE NAME&VCOUNT
typedef struct
{
    string name;
    int votes;
}
candidate;

//ARRAY OF CANDIDATES
candidate candidates[MAX];

//NUMBER OD CANDIDATES
int candidate_count;

//FUNCTION prototypes
bool vote(string name);
void print_winner(void);

int main(int argx, string argy[])
{
    //  CHECKING FOR INVALID USAGE
    if(argx < 2)
    {
        printf("Usage: plularity [candidate...]\n");
        return 1;
    }
    //POPULATING THE ARRAY OF CANDIDATES
    candidate_count = argx - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
{
    candidates[i].name = argy[i + 1];
    candidates[i].votes  = 0;
}

 int voter_count = get_int("Number of voters: ");

 //LOOPING OVER ALL VOTERS
 for (int i = 0; i <voter_count; i++)
 {
     string name = get_string("vote: ");

     //CHECKING FOR INVALID VOTE
     if(!vote(name))
     {
         printf("Invalid vote.\n");
     }
}

//DISPLAY WINNER OF ELECTION
print_winner();

}

//UPDATE VOTE TOTALS GIVEN IN A NEW VOTE
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if(strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}


//PRINTING THE WINNER
void print_winner(){
    int max_votes = candidates[0].votes;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {printf("%s\n", candidates[i].name);
    }

    }
}




