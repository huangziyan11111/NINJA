#include "DistanceCalculator.hpp"
#include "ExceptionHandler.hpp"

class DistanceReader {
public:
    static const int numPages = 10;

    DistanceReader(std::string fileName);

    DistanceReader(DistanceCalculator *distCalc, int K, int threads);

    ~DistanceReader();

    void read(std::string **names, int **distances);

    void readAndWrite(std::string **names, FILE *outFile);

    void write(FILE *outFile, double **distances, std::string **names) const;

    int threads;
    int K;
    FILE *r;
    size_t fileSize;
    DistanceCalculator *distCalc;
private:
    static float atoi(char *in, int end);
};


