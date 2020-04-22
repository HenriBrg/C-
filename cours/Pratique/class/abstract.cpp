# include <string>
# include <iostream>

class mother {
public:
	virtual void hello() = 0;

	mother(): i(30) {
		std::cout << "mother creation" << std::endl;
		std::cout << i << std::endl;
	};
protected:
	int i;
};

class daughter: virtual public mother {
public:
	void hello() {
		std::cout << "daughter" << std::endl;
		std::cout << this->i << std::endl;
	};
};

int main() {
	mother *m = new daughter;
	(void)m;
	m->hello();
	return 0;
}
