#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <rtsp-url>" << std::endl;
        return 1;
    }

    // Pass the stream URL at launch so camera credentials do not live in source code.
    cv::VideoCapture cap(argv[1], cv::CAP_FFMPEG);

    if (!cap.isOpened()) {
        std::cerr << "Could not open the RTSP stream." << std::endl;
        return 1;
    }

    cv::Mat frame;
    while (true) {
        if (!cap.read(frame) || frame.empty()) {
            std::cerr << "Could not read a frame from the stream." << std::endl;
            break;
        }

        cv::imshow("RTSP stream", frame);

        if (cv::waitKey(30) == 27) {
            break; // Press ESC to exit.
        }
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
