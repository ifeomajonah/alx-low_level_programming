/**
 * _abs - computes teh absolute value of an integer
 *
 * Return: return integer
 */
int _abs(int num)
{
	int sum;
	int result = num;
	
	if (result < 0)
	{
		sum = result - result;
		return (sum - result);
	} 

	return (result);
}
