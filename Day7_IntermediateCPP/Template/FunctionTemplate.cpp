template <class X>

void swapargs(X &a, X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}

//explicit init.. tells complier to generate a defination for these methods.
template void swapargs<int>(int&, int&);
template void swapargs<char>(char&, char&);
template void swapargs<double>(double&, double&);