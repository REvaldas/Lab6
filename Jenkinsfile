pipeline {
    agent { label 'docker-agent-alpine' }

    stages {
        stage('Install Build Tools') {
            steps {
                sh '''
                #!/bin/sh -xe
                apk update
                apk add --no-cache build-base cmake git
                '''
            }
        }

        stage('Build Project') {
            steps {
                sh '''
                #!/bin/sh -xe
                mkdir -p build
                cd build
                cmake ..
                cmake --build . --verbose
                '''
            }
        }

        stage('Run Tests') {
            steps {
                sh '''
                #!/bin/sh -xe
                cd build
                ./test_main
                '''
            }
        }
    }

    post {
        always {
            echo "Build finished"
        }
    }
}
