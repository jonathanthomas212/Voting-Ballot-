int readIn (ifstream&fin,int array[10][])
{
	int num_candidates=0;
	fin>>num_candidates;
	int temp=0;
	
	while(fin>>temp)
	{
		array[0][temp]++

		for(int ballot_round=1; ballot_round<num_candidates; ballot_rout++)
		{
			fin>>temp,
			array[ballot_round][temp]++;
		}
	}
	return num_candidates;
}



int winningCanidate (int array[][10],int num_candidates,int rank)
{
	int votes[10]={0};
	for (int round=0; round<rank; round++)
	{
		for(int candidates=0; candidate<num_candidates; candidate++)
		{
			votes[candidate]+= array[candidate][round];
		}
	}
	int total_votes=0;
	for (int candidate=0,candidate<num_candidate;candidate++)
	{
		total_votes+=votes[candidate];
	}
	for (int candidate=0; candidate<num_candidate;candidate++)
	{
		if (vote[candidate]>0.5*total_vote)
		{
			return candidate;
		}
	}
	return -1;
}


int main()
{ifstream fin("votes.txt");
int votes[10][10]=0;
int num_candiates=0;
num_candidates=readIn(fin,votes);
for (int rank=0,rank<num_candidates&&winning_candidate==-1;rank++)
{
	winning_candiate=winningCandidate(votes, num, candidates,rank;)
}

if (winning_candidates==-1)
{
	cout<<"no winner";
}
else
{
	cout<< "candidate"<< winning_candidate<< "won";
}

return exit success;
}
