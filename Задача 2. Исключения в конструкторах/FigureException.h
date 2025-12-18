#ifndef FIGUREEXCEPTION_H 
#define FIGUREEXCEPTION_H 

class FigureException
{
public:
	FigureException(std::string message);
	std::string getMessage() const;
private:
	std::string message{"Error"};
};

#endif 
