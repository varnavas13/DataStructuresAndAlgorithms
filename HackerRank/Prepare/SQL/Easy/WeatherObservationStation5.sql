SELECT CITY, CityLength
FROM (
    SELECT CITY, LENGTH(CITY) AS CityLength,
           ROW_NUMBER() OVER (ORDER BY LENGTH(CITY), CITY) AS ShortestRank,
           ROW_NUMBER() OVER (ORDER BY LENGTH(CITY) DESC, CITY) AS LongestRank
    FROM STATION
) AS RankedCities
WHERE ShortestRank = 1 OR LongestRank = 1;
