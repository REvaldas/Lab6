# For C++ build/testing (Alpine)
FROM alpine:latest

# Install build essentials and cmake
RUN apk add --no-cache build-base cmake git

# Set working directory
WORKDIR /home/jenkins

# Copy project files
COPY . .

# Default command: build and run tests
CMD ["sh", "-c", "mkdir -p build && cd build && cmake .. && make && ./test/test_main"]
