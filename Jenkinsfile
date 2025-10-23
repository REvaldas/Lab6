pipeline {
    agent { label 'docker-agent-alpine' }

    stages {
        stage('Install Build Tools') {
            steps {
                sh '''
                set -x
                apk update
                apk add --no-cache build-base cmake git
                '''
            }
        }

        stage('Build Project') {
            steps {
                sh '''
                set -x
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
                set -x
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
