TEST(MathLibTest, CalculateMedian) {
    std::vector<double> data_odd = {1.0, 5.0, 3.0}; 
    EXPECT_DOUBLE_EQ(calculate_median(data_odd), 3.0);
    std::vector<double> data_even = {1.0, 2.0, 3.0, 4.0};
    EXPECT_DOUBLE_EQ(calculate_median(data_even), 2.5);
}
