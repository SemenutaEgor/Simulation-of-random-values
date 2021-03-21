#pragma once

class randval {
private:
	double val;
	double frequency;
	double prob;
	double relcumfreq;
public:
	//default constructor
	randval() {
		val = 0;
		frequency = 0;
		prob = 0;
		relcumfreq = 0;
	};

	//constructor with parameters
	randval(double _val) {
		val = _val;
		frequency = 1;
		prob = 0;
		relcumfreq = 0;
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

	void setprob(double newprob) {
		prob = newprob;
	}

	double getprob() {
		return prob;
	}

	void setrelcumfreq(double newrelcumfreq) {
		relcumfreq = newrelcumfreq;
	}

	double getrelcumfreq() {
		return relcumfreq;
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

bool comp2(double a, double b) {
	return a < b;
}

double f1(double x) {
	if (x <= 0) {
		return 0;
	}
	else {
		return 0;
	}
}