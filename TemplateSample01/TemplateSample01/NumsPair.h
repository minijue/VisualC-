#pragma once
template<typename T1, typename T2>
class NumsPair {
public:
	NumsPair() {};
	NumsPair(T1 v1, T2 v2) { value1 = v1; value2 = v2; }
	~NumsPair() {};
	T1 getValue1() const { return value1 };
private:
	T1 value1;
	T2 value2;
};

