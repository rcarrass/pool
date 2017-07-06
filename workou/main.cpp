#include <opencv2\opencv.hpp>
#include <opencv2\photo.hpp>
#include <iostream>
#include <map>

using namespace cv;
using namespace std;

// http://stackoverflow.com/a/34734939/5008845
// void reduceColor_Quantization(const Mat3b& src, Mat3b& dst)
// {
//     uchar N = 64;
//         dst = src / N;
//             dst *= N;
//             }
//
//             // http://stackoverflow.com/a/34734939/5008845
//             void reduceColor_kmeans(const Mat3b& src, Mat3b& dst)
//             {
//                 int K = 8;
//                     int n = src.rows * src.cols;
//                         Mat data = src.reshape(1, n);
//                             data.convertTo(data, CV_32F);
//
//                                 vector<int> labels;
//                                     Mat1f colors;
//                                         kmeans(data, K, labels, cv::TermCriteria(), 1, cv::KMEANS_PP_CENTERS, colors);
//
//                                             for (int i = 0; i < n; ++i)
//                                                 {
//                                                         data.at<float>(i, 0) = colors(labels[i], 0);
//                                                                 data.at<float>(i, 1) = colors(labels[i], 1);
//                                                                         data.at<float>(i, 2) = colors(labels[i], 2);
//                                                                             }
//
//                                                                                 Mat reduced = data.reshape(3, src.rows);
//                                                                                     reduced.convertTo(dst, CV_8U);
//                                                                                     }
//
//                                                                                     void reduceColor_Stylization(const Mat3b& src, Mat3b& dst)
//                                                                                     {
//                                                                                         stylization(src, dst);
//                                                                                         }
//
//                                                                                         void reduceColor_EdgePreserving(const Mat3b& src, Mat3b& dst)
//                                                                                         {
//                                                                                             edgePreservingFilter(src, dst);
//                                                                                             }
//
//
//                                                                                             struct lessVec3b
//                                                                                             {
//                                                                                                 bool operator()(const Vec3b& lhs, const Vec3b& rhs) {
//                                                                                                         return (lhs[0] != rhs[0]) ? (lhs[0] < rhs[0]) : ((lhs[1] != rhs[1]) ? (lhs[1] < rhs[1]) : (lhs[2] < rhs[2]));
//                                                                                                             }
//                                                                                                             };
//
//                                                                                                             map<Vec3b, int, lessVec3b> getPalette(const Mat3b& src)
//                                                                                                             {
//                                                                                                                 map<Vec3b, int, lessVec3b> palette;
//                                                                                                                     for (int r = 0; r < src.rows; ++r)
//                                                                                                                         {
//                                                                                                                                 for (int c = 0; c < src.cols; ++c)
//                                                                                                                                         {
//                                                                                                                                                     Vec3b color = src(r, c);
//                                                                                                                                                                 if (palette.count(color) == 0)
//                                                                                                                                                                             {
//                                                                                                                                                                                             palette[color] = 1;
//                                                                                                                                                                                                         }
//                                                                                                                                                                                                                     else
//                                                                                                                                                                                                                                 {
//                                                                                                                                                                                                                                                 palette[color] = palette[color] + 1;
//                                                                                                                                                                                                                                                             }
//                                                                                                                                                                                                                                                                     }
//                                                                                                                                                                                                                                                                         }
//                                                                                                                                                                                                                                                                             return palette;
//                                                                                                                                                                                                                                                                             }
//
//
//                                                                                                                                                                                                                                                                             int main()
//                                                                                                                                                                                                                                                                             {
//                                                                                                                                                                                                                                                                                 Mat3b img = imread("path_to_image");
//
//                                                                                                                                                                                                                                                                                     // Reduce color
//                                                                                                                                                                                                                                                                                         Mat3b reduced;
//
//                                                                                                                                                                                                                                                                                             //reduceColor_Quantization(img, reduced);
//                                                                                                                                                                                                                                                                                                 reduceColor_kmeans(img, reduced);
//                                                                                                                                                                                                                                                                                                     //reduceColor_Stylization(img, reduced);
//                                                                                                                                                                                                                                                                                                         //reduceColor_EdgePreserving(img, reduced);
//
//
//                                                                                                                                                                                                                                                                                                             // Get palette
//                                                                                                                                                                                                                                                                                                                 map<Vec3b, int, lessVec3b> palette = getPalette(reduced);
//
//                                                                                                                                                                                                                                                                                                                     // Print palette
//                                                                                                                                                                                                                                                                                                                         int area = img.rows * img.cols;
//
//                                                                                                                                                                                                                                                                                                                             for (auto color : palette)
//                                                                                                                                                                                                                                                                                                                                 {
//                                                                                                                                                                                                                                                                                                                                         cout << "Color: " << color.first << " \t - Area: " << 100.f * float(color.second) / float(area) << "%" << endl;
//                                                                                                                                                                                                                                                                                                                                             }
//
//                                                                                                                                                                                                                                                                                                                                                 return 0;
//                                                                                                                                                                                                                                                                                                                                                 }
