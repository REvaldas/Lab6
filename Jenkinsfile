pipeline {
    agent { label 'docker-agent-alpine' }

    stages {
        stage('Install Build Tools') {
            steps {
                sh 'apk add --no-cache build-base cmake'
            }
        }
        stage('Build') {
            steps {
                sh 'mkdir -p build && cd build && cmake .. && make'
            }
        }
        stage('Run Tests') {
            steps {
                sh './build/test/test_main'
            }
        }
    }
}
