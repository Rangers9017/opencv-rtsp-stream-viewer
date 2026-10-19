# OpenCV RTSP Stream Viewer

A minimal C++ example that opens an RTSP video stream with OpenCV and displays frames in a window. Press **Esc** to close the preview.

**Language:** C++  
**Library:** OpenCV 4.10.0  
**License:** MIT

## Build

With a C++ compiler, OpenCV development files, and `pkg-config` available:

```bash
g++ connect.cpp -o rtsp-viewer $(pkg-config --cflags --libs opencv4)
```

If your OpenCV installation uses a different package name or is not registered with `pkg-config`, adjust the include and linker flags for your platform.

## Run

Pass the stream URL as the only argument:

```bash
./rtsp-viewer "rtsp://USER:PASSWORD@CAMERA:554/STREAM_PATH"
```

Use a camera URL from your local configuration. Do not commit a URL containing real credentials to the repository.

## Türkçe

OpenCV ile RTSP video akışını açıp kareleri pencerede gösteren küçük bir C++ örneğidir. Önizlemeyi kapatmak için **Esc** tuşuna bas.

Derleme için C++ derleyicisi, OpenCV geliştirme dosyaları ve `pkg-config` gerekir. Akış adresini programa komut satırı argümanı olarak ver; gerçek kamera bilgilerini kaynak koda ekleme.
