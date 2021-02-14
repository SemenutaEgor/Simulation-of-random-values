#pragma once

class randval {
private:
	double val;
	double frequency;
public:
	//default constructor
	randval() {
		val = 0;
		frequency = 0;
	};

	//constructor with parameters
	randval(double _val) {
		val = _val;
		frequency = 1;
	}

	//set&get

	void setval(double newval) {
		val = newval;
	}

	void setfrequency(double newfrequency) {
		frequency = newfrequency;
	}

	double getval() {
		return val;
	}

	double getfrequency() {
		return frequency;
	}

	void incrementfrequency() {
		frequency++;
	}

	//compare operators

	friend bool operator> (const randval& d1, const randval& d2);
	friend bool operator<= (const randval& d1, const randval& d2);

	friend bool operator< (const randval& d1, const randval& d2);
	friend bool operator>= (const randval& d1, const randval& d2);
};

bool operator> (const randval& d1, const randval& d2)
{
	return d1.val > d2.val;
}

bool operator>= (const randval& d1, const randval& d2)
{
	return d1.val >= d2.val;
}

bool operator< (const randval& d1, const randval& d2)
{
	return d1.val < d2.val;
}

bool operator<= (const randval& d1, const randval& d2)
{
	return d1.val <= d2.val;
}

bool comp(randval a, randval b) {
	return a < b;
}