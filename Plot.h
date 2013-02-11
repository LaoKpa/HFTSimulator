#ifndef __PLOT__H__
#define __PLOT__H__


#include <vector>
#include <sstream>

class Plot
{
	public :
		Plot();
		virtual ~Plot();

		void plot();//essai
		void plotPrices( const std::vector<double> & x, const std::vector<int> & y);
		void plotOrderBook(	const std::vector<int> & x, const std::vector<int> & y,int last, double volatility);
		void plot2OrderBooks(const std::vector<int> & x1, const std::vector<int> & y1,int last1,
							const std::vector<int> & x2, const std::vector<int> & y2,int last2);
							
		void plot(std::string dataName, int size, const double *x, const double *y) ;

	private :

		FILE * m_gnuPlot;


};
#endif //__PLOT__H__

