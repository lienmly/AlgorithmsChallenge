#include "DP_StockPrice.h"

int maxProfitStockPrice::maxProfit(vector<int>& price)
{
	int sz = price.size();

	int * own = new int[sz];
	int * notown = new int[sz];

	// Set the last value
	// If own (1) sell (2) do nothing 
	// If not own (1) buy (2) do nothing 
	own[sz - 1] = price[sz - 1];
	notown[sz - 1] = 0; 

	for (int i = sz - 2; i >= 0; i--) {
		// if own stock 
		if ((price[i] + notown[i + 1]) > own[i + 1])
			own[i] = price[i] + notown[i + 1];
		else
			own[i] = own[i + 1];
		// if not own stock 
		if ((price[i] * (-1) + own[i + 1]) > notown[i + 1])
			notown[i] = price[i] * (-1) + own[i + 1];
		else
			notown[i] = notown[i + 1]; 
	}

	return notown[0];
}
