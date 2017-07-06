int ft_is_prime(int nb)
{
	 int i;
	 int is_prime;

	 i = 2;
	 is_prime = 1;
	 if (nb == 1 || nb == 2 || nb < 0)
		 return 0;
	 while ((i * i) <= nb && is_prime == 1)
	 {
		if ((nb % i)  == 0)
			is_prime = 0;
		i++;
	 }
	 return is_prime;
}
