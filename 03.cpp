#include <iostream>
#include "histogram.hpp"

const unsigned MAX_SIZE = 51;

int main()
{
  unsigned n;
  std::cin>>n;

  char** list = new char*[n];
  for(size_t i=0; i<n; ++i)
  {
    list[i] = new char[51];
    std::cin>>list[i];
  }

  Histogram* histogram = new Histogram[n];
  int M=0;

  for(size_t i=0; i<n; ++i)
  {
    bool found= false;
    for(size_t j=0; j<M && !found; ++j)
    {
        if(histogram[j].equals(list[i]))
        {
            found = true;
            histogram[j].count++;
        }
    }

    if(!found)
    {
        strcpy(histogram[M].name, list[i]);
        histogram[M].count = 1;
        ++M;
    }
  }

  int mostFrequent = 0;
  for(size_t i = 1; i<M; ++i)
  {
    if(histogram[i].count > histogram[mostFrequent].count)
    {
       mostFrequent = i;
    }
  }

  std::cout<<histogram[mostFrequent].name << " "<< histogram[mostFrequent].count<<std::endl;

  for(size_t i=0; i<n; ++i)
  {
    delete[] list[i];
  }
  delete[] list;
  delete[] histogram;

}